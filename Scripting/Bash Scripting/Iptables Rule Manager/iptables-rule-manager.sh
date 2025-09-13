# ===========================================================
# Required :
# 1. Write a bash script.
# 2. Get the following information from the user:
#    - IP address (including subnet)
#    - Destination port
#    - Desired action
# 3. Execute the IP table rules accordingly.
# 4. The user can define more than one rule.
# 5. Print the final rules for the user.
# ===========================================================

# ===========================================================
# This script is a small program that helps you easily add firewall (iptables) rules.
#
# How it works:
# 1. It asks you to enter the IP address and subnet mask.
# 2. It asks you for the destination port.
# 3. It asks you for the desired action (ACCEPT to accept the connection, DROP to drop it, or REJECT to reject it).
# 4. After entering the information, the script executes the rule directly in the system.
# 5. It asks you if you want to add another rule. If you choose no, it stops.
# 6. Finally, it displays all the executed rules so you know what has been applied.
#
# In short:
# This script is an easy way to apply IP rules directly without manually entering commands each time.
# It also allows you to add multiple rules in the same session.
# ===========================================================

# ========================================
# Create :
# nano iptables-rule-manager.sh
# ========================================

#!/bin/bash

Rules=()

while true
do
    echo "Enter Your IP :"
    read IP

    echo "Enter SubnetMask :"
    read SUBNET

    echo "Desteination Port :"
    read DesPort

    echo "Enter Your Required Action (ACCEPT/DROP/REJECT) :"
    read Action

    sudo iptables -A INPUT -d $IP/$SUBNET -p tcp --dport $DesPort -j $Action

    Rules+=("iptables -A INPUT -d $IP/$SUBNET -p tcp --dport $DesPort -j $Action")

    echo "Do you want to add another rule? (Y/N)"
    read Choose

    if [ "$Choose" != "Y" ]
            then
            break
    fi
    done

    echo "Executed Rules:"
    for rule in "${Rules[@]}"
do
    echo $rule
done

# =====================================
# Add Execute Permission:
# chmod +x iptables-rule-manager.sh
#
# Run:
# ./iptables-rule-manager.sh
# =====================================