/*
 * JniHelpers.h
 *
 *  Created on: Nov 22, 2014
 *      Author: reddevil_138
 */

#ifndef JNIHELPERS_H_
#define JNIHELPERS_H_

#include <iostream>

using namespace std;

class JniHelpers {
public:
	static unsigned int 		jniCommonIntCall	(const char* methodName, const char* classPath, const char* arg0) ;
	static unsigned int 		jniCommonIntCall	(const char* methodName, const char* classPath, const char* arg0, bool looping) ;
	static 			void 		jniCommonVoidCall	(const char* methodName, const char* classPath);

	static 			void 		jniCommonVoidCall	(const char* methodName, const char* classPath, const char* arg0);
	static 			void 		jniCommonVoidCall	(const char* methodName, const char* classPath, const char* arg0, bool looping);
	static 			void 		jniCommonVoidCall	(const char* methodName, const char* classPath, const char* arg0, long score);
	static 			void 		jniCommonVoidCall	(const char* methodName, const char* classPath, const char* arg0, int numSteps);

	static 			void 		jniCommonVoidCall	(const char* methodName, const char* classPath, unsigned int arg0);
	static 			float 		jniCommonFloatCall	(const char* methodName, const char* classPath ) ;
	static 			void 		jniCommonVoidCall	(const char* methodName, const char* classPath, float arg0);

	static 			bool	 	jniCommonBoolCall	(const char* methodName, const char* classPath) ;
	static 			bool	 	jniCommonBoolCall	(const char* methodName, const char* classPath, unsigned int arg0) ;
};



#endif /* JNIHELPERS_H_ */
