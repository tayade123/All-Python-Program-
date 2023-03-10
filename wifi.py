import pywifi
import time
from pywifi import const
wifi=pywifi.PyWiFi()

Iface=wifi.interfaces()[0]
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

	if Iface.status() in [const.IFACE_DISCONNECTED,const.IFACE_INACTIVE]:
	    print("network card IFACE_DISCONNECTED ")

	else:
		print("network card connected")

