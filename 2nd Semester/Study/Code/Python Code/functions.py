def greet(lang):
    if lang=="en":
        return "hello"
    elif lang=="sanskrit":
        return "namaste"    
    else:
        return "No language"    

lang=input()
print(greet(lang))       