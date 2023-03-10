import sqlite3
con=sqlite3.connect('sybcaj.db')
cur=con.cursor()
print('connected')
cur.execute("update emp set name='harshal' where id=112")
con.commit()