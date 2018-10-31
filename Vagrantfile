# -*- mode: ruby -*-
# vi: set ft=ruby :


Vagrant.configure("2") do |config|
	# For more boxes: https://vagrantcloud.com/search.
	config.vm.box = "ubuntu/trusty64"

	config.vm.synced_folder "modules/", "/home/vagrant/modules", create: true

	# For more configurations: https://www.vagrantup.com/docs/virtualbox/configuration.html
	config.vm.provider "virtualbox" do |vb|
		vb.memory = 1024
		vb.cpus = 2
	end

	# For more configurations: https://www.vagrantup.com/docs/vmware/configuration.html
	config.vm.provider "vmware_desktop" do |vm|
		vm.vmx["memsize"] = "1024"
		vm.vmx["numvcpus"] = "2"
	end

	config.vm.provision "shell", inline: <<-SHELL
		apt-get update
		apt-get install -y build-essential linux-headers-`uname -r`
	SHELL
end
