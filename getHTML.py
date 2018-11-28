import requests
import sys
def get_html(url):
   _html = ""
   resp = requests.get(url)
   if resp.status_code == 200:
      _html = resp.text
   return _html

source = get_html("https://www.naver.com")
f = open('naver.txt','w', encoding='utf8')
f.write(source)
