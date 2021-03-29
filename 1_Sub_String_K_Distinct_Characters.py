'''
Longest Substring with At Most K Distinct Characters
input : string
output : length of longest substring with a most K distinct characters
'''

def findKDistinctChar(sInput,maxDist):
    windowLen = 0
    strInd,endInd = 0,0
    charDict = dict()

    for ii in range(len(sInput)): #loop over a string
        charDict[sInput[ii]] = charDict.get(sInput[ii],0) +1

        while len(charDict) > maxDist:#max K distinct check
            charDict[sInput[strInd]] -= 1
            if charDict[sInput[strInd]] <= 0:
                charDict.pop(sInput[strInd])

            strInd +=1
        windowLen = max(endInd-strInd+1,windowLen)#longest substring
        endInd +=1
    return windowLen

#function call
sInput = "abbcadcacacaca"
k =2
print(findKDistinctChar(sInput,k))

