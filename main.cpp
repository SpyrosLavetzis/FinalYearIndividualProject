
#ifndef RUN_GT
#include "SparseOptFlow.h"
#include "DenseOptFlow.h"
#include "SerialPort.h"

int main()
{

    DenseOptFlow track;
    track.trackDenseFlow();

	return 0;
}

#endif // !RUN_GT