#!/usr/bin/env python3

"""
Uygulama 2: Tek Eksen Boyunca Hareket 2
"""

import rospy
from geometry_msgs.msg import Twist 
from nav_msgs.msg import Odometry
from basit_uygulamalar.msg import Mesafe


class HedefeGit():

    def __init__(self):
        rospy.init_node("duz_git")
        self.hedef_konum = 0.0 #float(input("Hedef Giriniz: "))
        self.guncel_konum = 0.0
        self.kontrol = True
        
        pub2 = rospy.Publisher("mesafe_git", Mesafe, queue_size=10)
        hiz = Mesafe
        hiz.mesafe = 5.0
        pub2.publish(hiz)
        
        rospy.Subscriber("odom", Odometry, callback=self.odomCallback)
        rospy.Subscriber("mesafe_git", Mesafe, callback=self.mesafeCallback)
        

        pub = rospy.Publisher("cmd_vel", Twist, queue_size=10)
        hiz_mesaji = Twist()
        rate = rospy.Rate(10)

        
        while not rospy.is_shutdown():
                            
            rospy.loginfo("güncel konum => %.2f" ,self.guncel_konum )

            if self.kontrol:
                hiz_mesaji.linear.x = 0.5
                pub.publish(hiz_mesaji)

            else:
                hiz_mesaji.linear.x = 0.0
                pub.publish(hiz_mesaji)
                rospy.loginfo("hedefe varıldı")

            
            rate.sleep()
                
        
        

    def odomCallback(self,mesaj):
        self.guncel_konum = mesaj.pose.pose.position.x
        if self.guncel_konum <= self.hedef_konum:
            self.kontrol = True

        else:
            self.kontrol = False

    def mesafeCallback(self,mesaj):
        self.hedef_konum = mesaj.mesafe
        
        


        #print(mesaj.pose.pose.position.x)
        
try:

    HedefeGit()
except Exception as ex:
    print(ex) 
    rospy.loginfo("dugum sonlandı")




