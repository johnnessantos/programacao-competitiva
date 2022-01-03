# -*- coding: utf-8 -*-

import math


NUMBER_COINS = 5

n = float(input())
m = float(input())

coin = round(m-n, 2)
coin = round(coin - math.floor(coin), 2)

valid_coins = [0.50, 0.25, 0.10, 0.05, 0.01]
change_money = [0, 0, 0, 0, 0]

current_coin = 0
while coin > 0.0 and current_coin < NUMBER_COINS:
    if coin >= valid_coins[current_coin]:
        coin = round(coin-valid_coins[current_coin], 2)
        change_money[current_coin] += 1
    else:
        current_coin += 1

for i in range(NUMBER_COINS):
    print(f'{change_money[i]} moeda(s) de {int(valid_coins[i]*100)}')
