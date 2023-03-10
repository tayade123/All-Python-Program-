import nmap as la
la.begin=75
la.end=80
la.target = '127.0.01'
la.scanner=nmap.PortScanner()
for i in range(begin, end+1):
	res = scanner.scan(target,str(i))
	res = res['scan'][target]['tcp'][i]['state']
	print( f'Port {i} is {res}.')