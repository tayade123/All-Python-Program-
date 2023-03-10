import phonenumbers
number="+919265033923"

from phonenumbers import geocoder
ih_nmber = phonenumbers.parse(number,"IH")
print(geocoder.description_for_number(ih_nmber,"en"))

from phonenumbers import carrier
service_nmber = phonenumbers.parse(number,"RO")
print(carrier.name_for_number(service_nmber,"en"))