import sqlite3
con=sqlite3.connect('c:/python/sybcaj.db')
cur=con.cursor()
print('connected')
cur.execute("delete from emp where id=110;")
print('row 5')

con.commit()