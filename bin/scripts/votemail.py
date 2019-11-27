# python script
import sys
import os
import smtplib

send_to = sys.argv[1]
server = smtplib.SMTP(host='smtp.gmail.com', port=587)
server.ehlo()
server.starttls()
server.login("jash.kanani1408@gmail.com","pass_1234_word")
SUBJECT = "Company upvoted"
TEXT = """A new Startup user has upvoted you.
Login to Startup Service Provider to view more."""
message='Subject: {}\n\n{}'.format(SUBJECT,TEXT)
server.sendmail("jash.kanani1408@gmail.com",send_to,message)

server.quit()
