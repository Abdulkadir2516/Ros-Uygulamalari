"""
Uygulama 3: Çember Boyunca Hareket - Server Düğümü
"""

import rospy
from geometry_msgs.msg import Twist
from basit_uygulamalar.msg import CemberHareket

def cemberFonksiyonu(istek):
    hiz_mesajı = Twist()
    lineer_hiz = 0.5
    hiz_mesajı.linear.x = 0.5
    hiz_mesajı.angular.z = lineer_hiz / istek.yaricap
    # W = V/r
    # açısal hız = linear hız / yarı çap

    while not rospy.is_shutdown:
        pub.publish(hiz_mesajı)



rospy.init_node("cember_hareket")
pub = rospy.Publisher("cmd_vel", Twist, queue_size=10)
rospy.Service("cember_servis", CemberHareket, cemberFonksiyonu)
