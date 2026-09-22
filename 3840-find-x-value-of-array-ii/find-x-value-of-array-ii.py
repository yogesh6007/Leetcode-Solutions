class Solution(object):
    def resultArray(self,nums,k,queries):
        n=len(nums)
        tree=[[1,[0]*k] for _ in range(2*n)]
        def merge(a,b):
            p=(a[0]*b[0])%k
            cnt=a[1][:]
            for r in range(k):
                cnt[(a[0]*r)%k]+=b[1][r]
            return [p,cnt]
        for i in range(n):
            r=nums[i]%k
            cnt=[0]*k
            cnt[r]=1
            tree[n+i]=[r,cnt]
        for i in range(n-1,0,-1):
            tree[i]=merge(tree[2*i],tree[2*i+1])
        def update(pos,value):
            pos+=n
            r=value%k
            cnt=[0]*k
            cnt[r]=1
            tree[pos]=[r,cnt]
            pos//=2
            while pos:
                tree[pos]=merge(tree[2*pos],tree[2*pos+1])
                pos//=2
        def query(l,r):
            l+=n
            r+=n
            left=None
            right=None
            while l<r:
                if l%2:
                    left=tree[l] if left is None else merge(left,tree[l])
                    l+=1
                if r%2:
                    r-=1
                    right=tree[r] if right is None else merge(tree[r],right)
                l//=2
                r//=2
            if left is None:
                return right
            if right is None:
                return left
            return merge(left,right)
        ans=[]
        for index,value,start,x in queries:
            update(index,value)
            ans.append(query(start,n)[1][x])
        return ans 