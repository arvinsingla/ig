<div data-ng-app="eventApp" class="_event-wrapper" ng-class="'-' + eventSettings.theme" data-ng-controller="eventController">

  <!-- // Loading -->
  <div class="_loading" ng-show="!isLoaded">
    <div class="bullet"></div>
    <div class="bullet"></div>
    <div class="bullet"></div>
    <div class="bullet"></div>
  </div>

  <!-- // Single theme -->
  <div class="_event" ng-if="eventSettings.theme === 'single'" ng-show="isLoaded">
    <div class="_header">
      <div class="_title">{{ eventSettings.title }}</div>
      <div class="_hashtag">#{{ eventSettings.hashtag }}</div>
    </div>
    <div class="_photo-wrapper" ng-repeat="item in items">
      <img ng-show="$index === currentItemIndex" class="_photo-background" ng-src="{{ item.item }}" />
      <img ng-show="$index === currentItemIndex" class="_photo" ng-src="{{ item.item }}" />
      <div ng-show="$index === currentItemIndex" class="_photo_details">
        <img class="_avatar" ng-src="{{ item.profilePicture }}" />
        <div class="_caption">{{ item.fullName }} <span ng-if="item.fullName && item.caption">-</span> {{ item.caption }}</div>
      </div>
    </div>
  </div>

  <!-- // Double theme -->
  <div class="_event" ng-if="eventSettings.theme === 'double'" ng-show="isLoaded">
    <div class="_header">
      <div class="_title">{{ eventSettings.title }}</div>
      <div class="_hashtag">Tag your images with #{{ eventSettings.hashtag }}</div>
    </div>
    <div class="_photos">
      <div class="_photo-wrapper -current">
        <div class="_photo-container">
          <img class="_photo" ng-src="{{ items[0].item }}">
          <div class="_photo-details">
            <img class="_avatar" ng-src="{{ items[0].profilePicture }}" />
            <div class="_caption">{{ items[0].fullName }} <span ng-if="items[0].fullName && items[0].caption">-</span> {{ items[0].caption }}</div>
          </div>
        </div>
        <div class="_subheading">Most Recent Photo</div>
      </div>
      <div class="_photo-wrapper -recent">
        <div class="_photo-container" ng-show="$index === currentItemIndex" ng-repeat="item in (items | limitTo: items.length : 1)">
          <img  class="_photo" ng-src="{{ item.item }}" />
          <div class="_photo-details">
            <img class="_avatar" ng-src="{{ item.profilePicture }}" />
            <div class="_caption">{{ item.fullName }} <span ng-if="item.fullName && item.caption">-</span> {{ item.caption }}</div>
          </div>
        </div>
        <div class="_subheading -right">Previous Photos</div>
      </div>
    </div>
  </div>

</div>
