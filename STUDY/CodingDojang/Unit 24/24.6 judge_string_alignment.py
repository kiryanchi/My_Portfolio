price = list(map(int, input().split(';')))
price.sort(reverse=True)
for i in price:
    print('{0:9,}'.format(i, ','))
    #print('%9d' % format(i, ','))