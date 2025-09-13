#!/bin/bash

echo "Inter Domain"
read DOMAIN 

IP_ADDRESSES=$(dig +short $DOMAIN)

for IP in $IP_ADDRESSES; do
    sudo iptables -A OUTPUT -d $IP -j DROP
    sudo iptables -A INPUT -s $IP -j DROP
    echo "Blocked IP: $IP"
done

FILE=test44.txt 
touch . $FILE 
echo "$DOMAIN" >> $FILE
echo "$IP_ADDRESSES" >> $FILE  