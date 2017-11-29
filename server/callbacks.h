void entity_on_create(librg_event_t *event) {
    // emtpy
}

void entity_on_update(librg_event_t *event) {
    switch (event->entity->type) {
        case TYPE_PED: {
            auto ped = (ped_t *)event->entity->user_data;
            librg_data_wptr(event->data, &ped->stream, sizeof(ped_t));
        } break;

        case TYPE_CAR: {

        } break;
    }
}

void entity_on_remove(librg_event_t *event) {
    // emtpty
}

void entity_on_csupdate(librg_event_t *event) {
    switch (event->entity->type) {
        case TYPE_PED: {
            auto ped = (ped_t *)event->entity->user_data;
            librg_data_rptr(event->data, &ped->stream, sizeof(ped_t));
        } break;

        case TYPE_CAR: {

        } break;
    }
}