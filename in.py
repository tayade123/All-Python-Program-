import instapy 


session = instapy( username = "_._jagdish_._18",passwoed = "lenovo_8758" )
session.login()

session.set_relationship_bounds(enable = True, max_followers = 200)

session.set_do_follow(True, percentage=100)

session.end()