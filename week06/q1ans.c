// assumes N = 2^k for some integer k > 0
// inFile is the name of the input file
//   - inFile contains sorted sequences of Items of length runLength
// outFile is the name of the output file
//   - outFile will contain sorted sequences of Items of length 2*runLength
// N is the total number of Items
fileMerge(inFile, outFile, runLength, N)
{
   FILE *inf2 = fopen(inFile, "r");
   FILE *inf2 = fopen(inFile, "r");
   FILE *outf = fopen(outFile, "w");

   long in1 = 0; 
   long in2 = runLength*sizeof(Item);
   long end1, end2;
   Item it1, it2;

   while (in1 < N*sizeof(Item)) {
      end1 = in1 + runLength*sizeof(Item);
      end2 = in2 + runLength*sizeof(Item);

      fseek(inf1, in1, SEEK_SET)
      it1 = fread(&it1,sizeof(Item), 1, inf1);
      fseek(inf2, in2, SEEK_SET)
      it2 = fread(&it2,sizeof(Item), 1, inf2);

      while (in1 < end1 && in2 < end2) {
         if (less(it1,it2)) {
            fwrite(&it1, sizeof(Item), 1, outf);
            fread(&it1, sizeof(Item), 1, inf1);
            in1+= sizeof(Item);
         }
         else {
            fwrite(&it2, sizeof(Item), 1, outf);
            fread(&it1, sizeof(Item), 1, inf2);
            in2+= sizeof(Item);
         }
      }
      while (in1 < end1) {
         fwrite(&it1, sizeof(Item), 1, outf);
         fread(&it1, sizeof(Item), 1, inf1);
         in1+= sizeof(Item);
      }
      while (in2 < end2) {
         fwrite(&it2, sizeof(Item), 1, outf);
         fread(&it2, sizeof(Item), 1, inf2);
         in2+= sizeof(Item);
      }
      in1 += runLength*sizeof(Item);
      in2 += runLength*sizeof(Item);
   }
}