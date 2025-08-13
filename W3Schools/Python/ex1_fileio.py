
if __name__ == "__main__":
    #create and write some data
    f = open("ex1.txt", "wt")
    data1 = ["hi", 23, ["test", "hi2"], {"key": "value"}]
    for idata in data1:
        f.write("" + str(idata) + "\n")
    data2 = {"key": "value", "name": ["Bob", "John", {"name2": "Johnny"}]}
    for ikey in data2:
        f.write("" + str(ikey) + " : " + str(data2[ikey]) + "\n")
    f.close()
    #now read
    f = open("ex1.txt", "rt")
    for line in f:
        print(line, end="")
    f.close()