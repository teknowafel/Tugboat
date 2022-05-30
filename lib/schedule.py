import lib.compose

def schedule_interval(stack, scheduler):
    try:
        scheduler.remove_job(stack['appname'])
    except:
        pass
    try:
        scheduler.add_job(lambda: lib.compose.update(stack), 'interval', seconds = stack['updates']['interval'], id = stack['appname'])
        return True
    except:
        return False