# python script
import sys
import os
import smtplib

send_to = sys.argv[1]
server = smtplib.SMTP(host='smtp.gmail.com', port=587)
server.ehlo()
server.starttls()
server.login("your-email-id","your-password")
SUBJECT = "SSP Registration"
TEXT = "Congratulations! You've successfully registered to Startup Service Provider"
message='Subject: {}\n\n{}'.format(SUBJECT,TEXT)
server.sendmail("your-email-id",send_to,message)

server.quit()
