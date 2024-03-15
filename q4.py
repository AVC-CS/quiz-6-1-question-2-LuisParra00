import os

def main():
    if not os.path.exists('employee.txt'):
        result = False

    with open('employee.txt') as fileobj:
        lines = fileobj.readlines()
        numoflines = len(lines)
        print('Num of lines: ', numoflines)
        for i in range(numoflines):
            lines[i] =  lines[i].rstrip('\n') 
            print (lines[i])

    return lines

    # lastline = lines[numoflines-1].split()
    # if lastline[0] != 'Heather' or lastline[1] != '100' or lastline[2] != '90':
    #     result = False

    # result = True
    # return result 
    

if __name__ == '__main__':
    main()
    