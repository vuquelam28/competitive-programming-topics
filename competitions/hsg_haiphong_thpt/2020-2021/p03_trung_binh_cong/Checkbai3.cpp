//#define SPOJ_JUDGE
//------------------
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdarg>
#include<utility>
#ifdef SPOJ_JUDGE
	#include "spoj.h"
	void result(int);
#else
	FILE    *file_p_in,     // problem's input
	*file_p_out,    // problem's output
	*file_t_out,    // tested program's output
	*file_t_src,    // tested program's source
	*file_score,    // score for the program, for challenge problems
	*file_u_info,   // additional info - psetter only
	*file_p_info;   // additional info - psetter and solution's owner

	void themis_init(const char*, const char*);
	void local_init(const char*, const char*, const char*);
	void result(double);
#endif // SPOJ_JUDGE
using namespace std;
#define FOR(i, a, b) for(int i=(a), _b=(b); i<=b; ++i)
void read_in(const char*, ...);
void read_out(const char*, ...);
void read_ans(const char*, ...);
void message(const char*, ...);
//============================== CHECKER FROM HERE ==============================
typedef pair<int, int> II;
typedef long long LL;
const int MAXN = 1+int(2e5);
const int INF = int(1e9);
#define TASKNAME "BAI3"
int a[MAXN];
int n, m, k, ansp, ansq, outp, outq;

void run(){
    read_in("%d %d ", &n, &k);
    FOR(i, 1, n){
        read_in("%d ", &a[i]);
    }
    read_ans("%d %d", &ansp, &ansq);
    read_out("%d %d", &outp, &outq);
    if(ansp == 0 && ansq == 0){
        if(outp == 0 && outq == 0){
            message("Correct 0 0!\n");
            result(1);
        }
        message("Wrong: ANS 0 0 vs. OUT *\n");
        result(0);
    }
    if(a[outp] + a[outq] != 2*k){
        message("Wrong: a[p] + a[q] != 2*k *\n");
        result(0);
    }
    message("PASSED!\n");
    result(1); //1 - AC; 0 - WA
}
//============================== CHECKER END HERE ==============================
int main(){
#ifdef SPOJ_JUDGE
	spoj_init();
#else
	themis_init(TASKNAME".INP", TASKNAME".OUT");
    //local_init(TASKNAME".INP", TASKNAME".OUT", TASKNAME".ANS");
#endif
    run();
}

#ifdef SPOJ_JUDGE
	void read_in(const char * format, ...){
		va_list args;
		va_start (args, format);
		int res = vfscanf (spoj_p_in, format, args);
		va_end (args);
		if(res == EOF){
			message("Input not enough!!!\n");
			result(0);
		}
	}

	void read_ans(const char * format, ...){
		va_list args;
		va_start (args, format);
		int res = vfscanf (spoj_p_out, format, args);
		va_end (args);
		if(res == EOF){
			message("Answer not enough!!!\n");
			result(0);
		}
	}

	void read_out(const char * format, ...){
		va_list args;
		va_start (args, format);
		int res = vfscanf (spoj_t_out, format, args);
		va_end (args);
		if(res == EOF){
			message("Output not enough!!!\n");
			result(0);
		}
	}

	void message(const char * format, ...){
		va_list args;
		va_start (args, format);
		vfprintf (spoj_p_info, format, args);
		va_end (args);
	}

	void result(int accepted){
		if(accepted) exit(SPOJ_RV_POSITIVE);
		else exit(SPOJ_RV_NEGATIVE);
	}
#else
	char TestPath[1000], CurrPath[1000];
	char fINP[1000], fOUT[1000], fANS[1000];

	void themis_init(const char* inName, const char* outName){
		gets(TestPath);
		gets(CurrPath);

		sprintf(fINP, "%s\\%s", TestPath, inName);
		sprintf(fANS, "%s\\%s", TestPath, outName);
		sprintf(fOUT, "%s\\%s", CurrPath, outName);

		file_p_in     = fopen(fINP, "r");
		file_p_out    = fopen(fANS, "r");
		file_t_out    = fopen(fOUT, "r");
	}

	void local_init(const char* inName, const char* outName, const char* ansName){
		file_p_in     = fopen(inName, "r");
		file_p_out    = fopen(ansName, "r");
		file_t_out    = fopen(outName, "r");
	}

	void read_in(const char * format, ...){
		va_list args;
		va_start (args, format);
		int res = vfscanf (file_p_in, format, args);
		va_end (args);
		if(res == EOF){
			message("Input not enough!!!\n");
			result(0.0);
		}
	}

	void read_ans(const char * format, ...){
		va_list args;
		va_start (args, format);
		int res = vfscanf (file_p_out, format, args);
		va_end (args);
		if(res == EOF){
			message("Answer not enough!!!\n");
			result(0.0);
		}
	}

	void read_out(const char * format, ...){
		va_list args;
		va_start (args, format);
		int res = vfscanf (file_t_out, format, args);
		va_end (args);
		if(res == EOF){
			message("Output not enough!!!\n");
			result(0.0);
		}
	}

	void message(const char * format, ...){
		va_list args;
		va_start (args, format);
		vfprintf (stdout, format, args);
		va_end (args);
	}

	void result(double score){
		fprintf(stdout, "%.1f\n", double(score));
		exit(0);
	}
#endif
