#!/bin/sh
find .  -iname "*.sh"  -print | sed 's/.*\///' | sed 's/...$//'
