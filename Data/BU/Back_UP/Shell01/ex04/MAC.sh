#!/bin/sh
ifconfig | grep "ether " | tr -d 'ether ' | tr -d '	'
