# Vagrant LKM Environment
This repository provides a Vagrantfile for an environment to develop and test Linux Kernel Modules.  
The Guest OS shares a folder with the Host OS (modules/). If you prefer to develop in your Host OS, you can share the files with the environment through that folder.

To create the environment, you only have to run the command:  
```
vagrant up
```

To enter the environment you have to log through a SSH connection with the command:  
```
vagrant ssh
```

You can also list all the available commands in:  
```
vagrant help
```

In the modules folder is also a dummy module with a Makefile to compile it, to test the module and clean the folder currently used.  
The test of the module shows the result for modinfo and the kernel messages (dmesg) after loading and unloading the module into the kernel.

To test the module, run:  
```
make automate
```
