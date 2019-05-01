#!/bin/python

import subprocess;
import os;

for file in os.listdir(os.getcwd()):
    if not ".git" in file and not os.path.basename(__file__) in file:
        print("Copying " + file + " : " + str(subprocess.call("cp -rT " + file + " ~/.config/QtProject/qtcreator/" + file, shell=True)));

print("Done");
