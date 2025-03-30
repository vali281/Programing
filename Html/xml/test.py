import xml.etree.ElementTree as ET
import os

file_path = r'd:\vs\html,js,css\web_tec\xml\test.xml'

# Check if file exists before parsing
if not os.path.exists(file_path):
    print(f"Error: File '{file_path}' not found.")
else:
    tree = ET.parse(file_path)
    root = tree.getroot()

    for book in root.findall('book'):
        title = book.find('title').text
        print(title)
