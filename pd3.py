import matplotlib.pyplot as plt
x=['UP','Gujarat','Rajasthan','Bengal','MP','Karnataka','Bihar','AP','Tamil Nadu']
y=[250.83,215.54,206.18,186.11,149.72,180.69,131,124.65,123.25]
y2=[17.1,8.26,9.54,15.7,7.92,29.7,7.26,20.5,26.7]
x2=['YELLOW is vaccine','RED is case']
font1 = {'family':'serif','color':'blue','size':20}
font2 = {'family':'serif','color':'darkred','size':15}
plt.title(' Covid-19 vaccine doses and cases ',fontdict = font1)
plt.plot(x,y,'oy--')
plt.plot(x,y2,'*r--')
plt.legend(title = "vaccine and case")
plt.plot(y , label=x2 )
plt.xlabel('India State',fontdict = font2)
plt.ylabel('vaccinetion and cases lakh',fontdict = font2)
plt.show()