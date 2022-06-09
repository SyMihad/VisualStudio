import sqlite3

def connect():
    conn=sqlite3.connect("books.db")
    cur=conn.execute("CREATE TABLE IF NOT EXISTS book (id INTEGER PRIMARY KEY, title TEXT, author TEXT, year INTEGER, isbn INTEGER)")
    conn.commit()
    conn.close()

def insert(title, author, year, isbn):
    conn=sqlite3.connect("books.db")
    cur=conn.execute("INSERT INTO book VALUES (NULL, ?, ?, ?, ?)", (title, author, year, isbn))
    conn.commit()
    conn.close()

def delete(id):
    conn=sqlite3.connect("books.db")
    cur=conn.execute("DELETE from book WHERE id=?", (id,))
    conn.commit()
    conn.close()

def search(title="", author="", year="", isbn=""):
    conn=sqlite3.connect("books.db")
    cur=conn.execute("SELECT * FROM book WHERE title=? OR authOR=? OR year=? OR isbn=?", (title, author, year, isbn))
    rows=cur.fetchall()
    conn.close()
    return rows

def update(id, title, author, year, isbn):
    conn=sqlite3.connect("books.db")
    cur=conn.execute("UPDATE book SET title=?, author=?, year=?, isbn=? WHERE id=?", (title, author, year, isbn, id))
    conn.commit()
    conn.close()

def view():
    conn=sqlite3.connect("books.db")
    cur=conn.execute("SELECT * FROM book")
    rows=cur.fetchall()
    conn.close()
    return rows

connect()
# insert("JAVA Programming", "Muzibur Rahman", 2016, 29384932)
# insert("C Programming", "Subin", 2014, 34023742)
# print(search(author="Subin"))
# update(2, "Aronnok", "Bivuti", 1908, 234873847)
# delete(2)
# print(view())