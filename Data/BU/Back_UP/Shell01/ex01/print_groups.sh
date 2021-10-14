#!/bin/sh
id -Gn $FT_USERS | tr ' ' ',' | tr -d '\n'
