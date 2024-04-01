import zlib, base64 

with open(r'chalmersgolf2024\input_file.txt','r') as file: 
    text = file.read() 

code = base64.b64encode(zlib.compress(text.encode('utf-8'), 9)).decode('utf-8') 

with open(r'chalmersgolf2024\compressed.txt','w') as f: 
    f.write(code)

decoded_txt = zlib.decompress(base64.b64decode(code)).decode('utf-8') 
print(len(code))