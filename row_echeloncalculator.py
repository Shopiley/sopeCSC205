# -*- coding: utf-8 -*-
"""
Created on Mon Feb 14 09:27:51 2022

@author: zion
"""

import numpy as np

count = 0
#The user inputs the number of rows and columns
print("Input your the dimensions of your matrix\n")
rows = int(input("Number of Rows: "))
columns = int(input("Number of Columns: "))

#The array generates the number of inputs to be placed in the matrix based on the rows and columns
A = np.array([[int(input("insert value: ")) for j in range(columns)] for j in range(rows)], dtype=float)
#The Row echleon form calculator
def ref(a,r,k):
    if(r==0):
        return a
    else:
        if(columns>1):
            if(a[k,k]>0):
                a[k]=(1/a[k,k])*(a[k])
            elif(a[k,k]<0):
                a[k]=abs((1/a[k,k])*(a[k]))
            elif(a[k,k]==0):
                a[k]=0
            for i in range(r-1):
                if(a[k+1,k]>0):
                    a[i+(k+1)]=np.subtract(a[i+k+1],((a[i+(k+1),k])*(a[k])))
                else:
                    a[i+(k+1)]=abs(np.subtract((a[i+(k+1),k])*(a[k]),a[i+k+1]))
#for single column matrices
        elif(columns==1):
            if(a[k,0]>0):
                a[k]=(1/a[k,0])*(a[k])
            elif(a[k,0]<0):
                a[k]=abs((1/a[k,0])*(a[k]))
            elif(a[k,0]==0):
                a[k]=0
            for i in range(r-1):
                if(a[k+1,0]>0):
                    a[i+(k+1)]=np.subtract(a[i+k+1],((a[i+(k+1),0])*(a[k])))
                else:
                    a[i+(k+1)]=abs(np.subtract((a[i+(k+1),0])*(a[k]),a[i+k+1]))
        #does it for the rest of the rows
        return ref(a,r-1,k+1)

def rank(a,r,col):
    ref(a,r,count)
    rank = 0
    for i in range(r):
        #checks if the number of zeros in a row is less than the column size and returns the rank size
        if(((a[i]==0).sum())<col):
            rank+=1
    return rank



print("------Select-------")
print("insert e for echelon form")
print("insert r for rank of matrix\n")
print("insert q to quit program\n")

check = input(" ")

if(check.lower()=="e"):
    print("-------------------------------------")
    print("Row echelon form is\n",ref(A,rows,count))
    print("-------------------------------------")
elif(check.lower()=="r"):
    print("-------------------------------------")
    print("\nThe rank is ",rank(A,rows,columns))
    print("-------------------------------------")
elif(check.lower()=="q"):
    exit(1);
else:
    print("Not recognized")