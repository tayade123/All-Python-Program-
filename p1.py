import sqlite3
con=sqlite3.connect('sybcaj.db')
cur=con.cursor()
print('hello')
cur.execute("select * from customer ;")
print('table select')
data=cur.fetchall()
for i in (data):
  print(i)

con.commit()