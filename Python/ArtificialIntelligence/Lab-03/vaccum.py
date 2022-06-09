table={('A','Clean'):'Right',
('A','Dirty'):'Suck',
('B','Clean'):'Left',
('B','Dirty'):'Suck'}

percepts=[]

def table_driven_agent(percept):
    print('Perception Received: '+ str(percept))
    percepts.append(percept)
    action = lookup(percept,table)
    return action

def lookup(percept,table):
    return table[percept]
    
import random
Location = random.choice(['A','B'])
Condition = random.choice(['Clean','Dirty'])
while True:
    action = table_driven_agent((Location, Condition))
    print('Action Performed: '+ action)
    cmd = input('Get Perception (yes/no): ')
    if(cmd == 'no' or cmd != 'yes'): break
    if action == 'Right':
        Location = 'B'
        Condition = random.choice(['Clean','Dirty'])
    else :
        action == 'Left'
        Location = 'A'
        Condition = random.choice(['Clean','Dirty'])