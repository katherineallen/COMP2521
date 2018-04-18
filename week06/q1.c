// assumes N = 2^k for some integer k > 0
// inFile is the name of the input file
//   - inFile contains sorted sequences of Items of length runLength
// outFile is the name of the output file
//   - outFile will contain sorted sequences of Items of length 2*runLength
// N is the total number of Items
fileMerge(inFile, outFile, runLength, N)
{
   FILE* inf1 = fopen(inFile, "r");
   FILE* inf2 = fopen(inFile, "r");
   FILE* outf = fopen(outFile, "w");
   Item it1, it2;
   long in1 = 0; 
   long in2 = runLength*sizeof(Item);
   while (in1 < N) {
      long end1 = in1+runLength*sizeof(Item);
      long end2 = in2+runLength*sizeof(Item);

      fseek(inf1, in1, SEEK_SET);
      fread(&it1, sizeof(Item), 1, inf1);
      fseek(inf2, in2, SEEK_SET);
      fread(&it2, sizeof(Item), 1, inf2);
      while (in1 < end1 && in2 < end2) {
         if (less(it1,it2)) {
            fwrite(&it1, sizeof(Item), 1, outf);
            fread(&it1, sizeof(Item), 1, inf1);
            in1+=sizeof(Item);
         }
         else {
            write it2 to outf
            it2 = read Item from inf2
            in2++
         }
      }
      while (in1 < end1) {
         write it1 to outf
         it1 = read Item from inf1
         in1++
      }
      while (in2 < end2) {
         write it2 to outf
         it2 = read Item from inf2
         in2++
      }
      in1 += runLength*sizeof(Item); 
      in2 += runLength;
   }
}








