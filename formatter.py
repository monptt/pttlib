import sys
import re

included = [] # include済みファイル

def embed(code):
    newcode = ""

    for line in code.split("\n"):
        m = re.search(r'(?<=#include\s\").*(?=\")', line)

        if(m==None):    #そのままにしておいていい行
            newcode += line+"\n"
        else:   #includeの行
            headerfile = m.group(0)
            if(headerfile in included):
                pass    # 埋め込み済み
            else:
                included.append(headerfile)
                with open(headerfile, "r") as h:
                    h_content = h.read()
                    h_content = embed(h_content)
                    newcode += h_content
                

    return newcode


if __name__=="__main__":
    code = sys.stdin.read()
    
    code_to_submit = embed(code)
    print(code_to_submit)