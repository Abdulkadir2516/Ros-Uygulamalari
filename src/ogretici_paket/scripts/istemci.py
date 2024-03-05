#!/usr/bin/env python3

"""
Service-Client Uygulaması: Client Düğümü
"""

import rospy
from ogretici_paket.srv import GecenZaman


def istekteBulun(x):
    rospy.wait_for_service("zaman")

    try:
        servis = rospy.ServiceProxy("zaman", GecenZaman)
        cevap = servis(x)
        return cevap.gecen_sure
    
    except rospy.exceptions as ex:
        rospy.loginfo("servis ile alakalı sorun var istemci.py")
        print("servis ile alakalı bir sorun meydana geldi" + ex)

hedef = float(input("hedef konum giriniz:"))

t = istekteBulun(hedef)

print("hedefe varana kadar geçen süre ", t)
# rospy.loginfo(t)