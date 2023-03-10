import pywifi
import time
from pywifi import const
wifi=pywifi.PyWiFi()

Iface=wifi.interface()[0]
Name=Iface.name()
Iface.scan()
time.sleep(1)

results=Iface.scan_results()
  for data in results:
      print(data.ssid)
      print(data.key)
      print(data.akm)
      print(data.cipher)
      print(data.auth)

      if Iface.ststus()in[const.IFACE_DISCONNETED,const.IFACE_INACTIVE]:
            print("Network is disconneted")

      else:
          print("Network is Conneted")