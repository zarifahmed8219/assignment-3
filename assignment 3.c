x=int(input('Enter Number of States:'))

state=[input('enter states:') for i in range(0,x)]

y=int(input('Enter Number of keys:'))

key=[input('enter key:') for i in range(0,y)]

final_state=(input('Enter final state:'))

z=[0 for i in range(len(state))]
for i in range(len(state)):

    z[i]=[0 for i in range(len(key))]

    for j in range(len(key)):

        z[i][j]=input('from '+ state[i]+ ' if '+key[j]+ ' go:')

def spot(q,w):
    list.append(z[state.index(q)][key.index(w)])

    return z[state.index(q)][key.index(w)]

while True:
    list=[]

    start=state[0]

    w=input('string to check:')

    for i in w:

        start=spot(start,i)

    if list[-1]== final_state:
        print('String accepted by grammer( '+state[0]+'->'+'->'.join(list)+')')
    else:
        print('not accepted')
