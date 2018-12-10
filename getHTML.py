import requests
import sys

from bs4 import BeautifulSoup

def get_html(url):
   _html = ""
   resp = requests.get(url)
   if resp.status_code == 200:
      _html = resp.text
   return _html

source = get_html("https://www.naver.com")
f = open('naver.txt',mode='w', encoding='utf8')
f.write(source)

source2 = get_html("http://www.inu.ac.kr/com/cop/mainWork/foodList1.do?siteId=inu&id=inu_050110010000")
f = open('cafe.txt',mode='w', encoding='utf8')
f.write(source2)
