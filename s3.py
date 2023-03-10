import sqlite3
con=sqlite3.connect('sybcaj.db')
cur=con.cursor()
print('connected')
cur.execute("delete from emp where id=113;")
print('row inserted')
con.commit()