#ifndef TASKSTRUCT_H
#define TASKSTRUCT_H

struct TASKSTRUCT {
	long state;
	void *stack;
	unsigned int cpu;
	int prio;
	int static_prio;
	int normal_prio;
	unsigned int rt_priority;
	pid_t pid;
	pid_t tgid;
	unsigned long nvcsw;
	unsigned long nivcsw;
};

#endif
