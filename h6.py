import sqlite3
con=sqlite3.connect('sybcaj.db')
cur=con.cursor()
print('Hello')
cur.execute("select * from emp;")
print('all data in table')
cur.execute("update emp set city='mumbai' where id=110;")
print('110 city is cheng mumbai')
cur.execute("select * from emp;")
print('table update')
data=cur.fetchall()
for i in (data):
   print(i)
con.commit()