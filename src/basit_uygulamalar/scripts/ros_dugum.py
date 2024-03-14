#!/usr/bin/env python

import rospy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import cv2
import numpy as np

class CameraSubscriber:
    def __init__(self):
        rospy.init_node('camera_subscriber', anonymous=True)
        rospy.Subscriber('/camera/rgb/image_raw', Image, self.camera_callback)
        self.br = CvBridge()

        

    def camera_callback(self, data):
        s

        
        try:
            im = np.ndarray(shape=(480, 640, 3), dtype="uint8")
            msg = self.br.cv2_to_imgmsg(im)  # Convert the image to a message
            im2 = self.br.imgmsg_to_cv2(msg) # Convert the message to a new image
            cmprsmsg = self.br.cv2_to_compressed_imgmsg(im)  # Convert the image to a compress message
            im22 = self.br.compressed_imgmsg_to_cv2(msg) # Convert the compress message to a new image
            #cv_image = self.br.imgmsg_to_cv2(data, "bgr8")
            # Görüntü işleme veya diğer işlemler burada yapılabilir
            cv2.imshow("Camera Feed", im2)
            cv2.waitKey(1)
        except CvBridgeError as e:
            print(e)
            rospy.logerr(e)

if __name__ == '__main__':
    try:
        camera_subscriber = CameraSubscriber()
        print("hi")
        rospy.spin()
    except rospy.ROSInterruptException:
        pass
