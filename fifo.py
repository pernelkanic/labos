def fifo():
global a,n,m
f = -1
page_faults = 0
page = []
	for i in range(m):
		page.append(-1)
	for i in range(n):
		flag = 0
		for j in range(m):
			if(page[j] == a[i]):
				flag = 1
				break
		if flag == 0:
			f=(f+1)%m
			page[f] = a[i]
			page_faults+=1
			print "\n%d ->" % (a[i]),
			for j in range(m):
				if page[j] != -1:
					print page[j],
				else:
					print "-",

				else:
					print "\n%d -> No Page Fault" % (a[i]),
			print "\n Total page faults : %d." % (page_faults)
		a = []
		n = input("\n Enter the size of reference string : ")
		for i in range(n):
		a.append(input(" Enter [%2d] : " % (i+1)))
		m = input("\n Enter page frame size : ")
		fifo()