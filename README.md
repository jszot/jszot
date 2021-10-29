import matplotlib.pyplot as plt
import numpy as np
import random
tab=[0]*366
for u in range(15000):
	x=0
	i=0
	s=set()
	while x==0:
		y=random.randint(0, 364)
		if (y in s):
			x=1
		else:
			s.add(y)
			i=i+1
	tab[i]=tab[i]+1
print(tab)
plt.hist(tab, density=True, bins=30)  # density=False would make counts
plt.ylabel('Probability')
plt.xlabel('Data');
