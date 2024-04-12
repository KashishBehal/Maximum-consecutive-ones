int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.

	 int i=0, j=0, noZeros=0,maxLen=0;

    while(j<n){

        if(vehicle[j]==0){

            noZeros++;

        }

        while(noZeros>m){

              if(vehicle[i]==0)

                noZeros--;

                i++;

        }

        maxLen=max(maxLen,(j-i+1));

        j++;

    }

    return maxLen;
}
