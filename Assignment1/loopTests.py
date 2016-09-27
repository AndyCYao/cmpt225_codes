import glob
#!/usr/bin/env python
import subprocess
import os

#passed = 0
total = 1

files = glob.glob('./tests/*.in')
for f in files:
	
	total += 1
	outputName = os.path.splitext(os.path.basename(f))[0]
	print "Running test {}... \n".format(outputName)

	command = "./gscheck < {} > {}.rslt".format(f, outputName)
	subprocess.call(command, shell=True)
	subprocess.call("diff -b ./tests/{}.out {}.rslt",format(outputName, outputName), shell=True)
	'''
	print "Running command {}\n".format(command)
	
	subprocess.call("./gscheck < 1.in > 1.out",shell=True)
	rt = subprocess.call("diff -b 1.out 1.gt",shell=True);
	if rt == 0:
	    passed += 1
	    print "passed"
	else:
	    print "failed"

	'''


#print "Passed " + str(passed) + " of {} tests".format(total)
