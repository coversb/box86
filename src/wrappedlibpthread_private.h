#if defined(GO) && defined(GOM) && defined(GO2) && defined(DATA)

// __errno_location
// fork
// __fork
// __h_errno_location
// _IO_flockfile
// _IO_ftrylockfile
// _IO_funlockfile
// __libc_allocate_rtsig
// __libc_current_sigrtmax
// __libc_current_sigrtmin
// pthread_atfork
GO(pthread_attr_destroy, iFp)
// pthread_attr_getaffinity_np
GO(pthread_attr_getdetachstate, iFpp)
// pthread_attr_getguardsize
GO(pthread_attr_getinheritsched, iFpp)
GO(pthread_attr_getschedparam, iFpp)
GO(pthread_attr_getschedpolicy, iFpp)
GO(pthread_attr_getscope, iFpp)
// pthread_attr_getstack
GO(pthread_attr_getstackaddr, iFpp)
GO(pthread_attr_getstacksize, iFpp)
GO(pthread_attr_init, iFp)
// pthread_attr_setaffinity_np
GO(pthread_attr_setdetachstate, iFpi)
// pthread_attr_setguardsize
GO(pthread_attr_setinheritsched, iFpi)
GO(pthread_attr_setschedparam, iFpp)
GO(pthread_attr_setschedpolicy, iFpi)
GO(pthread_attr_setscope, iFpi)
// pthread_attr_setstack
GO(pthread_attr_setstackaddr, iFpp)
GO(pthread_attr_setstacksize, iFpp)
// pthread_barrierattr_destroy
// pthread_barrierattr_getpshared
// pthread_barrierattr_init
// pthread_barrierattr_setpshared
// pthread_barrier_destroy
// pthread_barrier_init
// pthread_barrier_wait
GO(pthread_cancel, iFi)
// _pthread_cleanup_pop
// _pthread_cleanup_pop_restore
// _pthread_cleanup_push
// _pthread_cleanup_push_defer
// __pthread_cleanup_routine
// pthread_condattr_destroy
// pthread_condattr_getclock
// pthread_condattr_getpshared
// pthread_condattr_init
// pthread_condattr_setclock
// pthread_condattr_setpshared
GO(pthread_cond_broadcast, iFp)
GO(pthread_cond_destroy, iFp)
GO(pthread_cond_init, iFpp)
GO(pthread_cond_signal, iFp)
GO(pthread_cond_timedwait, iFppp)
GO(pthread_cond_wait, iFpp)
GOM(pthread_create, iFEpppp)
GO(pthread_detach, iFu)
GO(pthread_equal, iFuu)
// pthread_exit
// pthread_getaffinity_np
// pthread_getattr_np
// pthread_getconcurrency
// pthread_getcpuclockid
// pthread_getschedparam
// __pthread_getspecific
GO(pthread_getspecific, pFu)
// __pthread_initialize_minimal
GO(pthread_join, iFup)
// __pthread_key_create
GOM(pthread_key_create, iFEpp)
GO(pthread_key_delete, iFu)
// pthread_kill
// pthread_kill_other_threads_np
// __pthread_mutexattr_destroy
// pthread_mutexattr_destroy
// pthread_mutexattr_getprioceiling
// pthread_mutexattr_getprotocol
// pthread_mutexattr_getpshared
// pthread_mutexattr_getrobust_np
GO(pthread_mutexattr_gettype, iFpp)
// __pthread_mutexattr_init
GO(pthread_mutexattr_init, iFpp)
// pthread_mutexattr_setprioceiling
// pthread_mutexattr_setprotocol
// pthread_mutexattr_setpshared
// pthread_mutexattr_setrobust_np
GO(__pthread_mutexattr_settype, iFpi)
GO(pthread_mutexattr_settype, iFpi)
// pthread_mutex_consistent_np
// __pthread_mutex_destroy
GO(pthread_mutex_destroy, iFp)
// pthread_mutex_getprioceiling
// __pthread_mutex_init
// pthread_mutex_init
GO(__pthread_mutex_lock, iFp)
GO(pthread_mutex_lock, iFp)
// pthread_mutex_setprioceiling
// pthread_mutex_timedlock
GO(__pthread_mutex_trylock, iFp)
GO(pthread_mutex_trylock, iFp)
GO(__pthread_mutex_unlock, iFp)
GO(pthread_mutex_unlock, iFp)
GOM(pthread_once, iFEpp)
// __pthread_once
// __pthread_register_cancel
// __pthread_register_cancel_defer
// pthread_rwlockattr_destroy
// pthread_rwlockattr_getkind_np
// pthread_rwlockattr_getpshared
// pthread_rwlockattr_init
// pthread_rwlockattr_setkind_np
// pthread_rwlockattr_setpshared
// __pthread_rwlock_destroy
// pthread_rwlock_destroy
// __pthread_rwlock_init
// pthread_rwlock_init
// __pthread_rwlock_rdlock
// pthread_rwlock_timedrdlock
// pthread_rwlock_timedwrlock
// __pthread_rwlock_tryrdlock
// pthread_rwlock_tryrdlock
// __pthread_rwlock_trywrlock
// pthread_rwlock_trywrlock
// __pthread_rwlock_unlock
// __pthread_rwlock_wrlock
GO(pthread_self, uFv)
// pthread_setaffinity_np
// pthread_setcancelstate
// pthread_setcanceltype
// pthread_setconcurrency
// pthread_setschedparam
// pthread_setschedprio
// __pthread_setspecific
GO(pthread_setspecific, iFup)
// pthread_sigmask
// pthread_spin_destroy
// pthread_spin_init
// pthread_spin_lock
// pthread_spin_trylock
// pthread_spin_unlock
// pthread_testcancel
// pthread_timedjoin_np
// pthread_tryjoin_np
// __pthread_unregister_cancel
// __pthread_unregister_cancel_restore
// __pthread_unwind
// __pthread_unwind_next
// pthread_yield
// raise
// __res_state
// sem_close
// sem_destroy
// sem_getvalue
// sem_init
// sem_open
// sem_post
GO(sem_timedwait, iFpp)
GO(sem_trywait, iFp)
// sem_unlink
GO(sem_wait, iFp)
// __sigaction
// system
// __vfork

#endif